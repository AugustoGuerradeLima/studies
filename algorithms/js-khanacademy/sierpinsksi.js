var dim = 240;
var minSize = 8;
var drawGasket = function(x, y, dim) {
    if (dim <= minSize) {
	    rect(x, y, dim, dim);
    }
    else {
	    var newDim = dim / 2;
	    drawGasket(x, y, newDim);
	    drawGasket(x + newDim, y, newDim);
	    // drawGasket(x, y + newDim, newDim);
	    drawGasket(x + newDim, y + newDim, newDim);
    }
};
draw = function() {
    background(255, 255, 255); 
    fill(255, 255, 0);
    rect(0, 0, dim, dim);
    stroke(0, 0, 255);
    fill(0, 0, 255);
    drawGasket(0, 0, dim);
};
