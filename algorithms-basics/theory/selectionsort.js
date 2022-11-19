var swap = function(array, firstIndex, secondIndex) {
    var temp = array[firstIndex];//1
    array[firstIndex] = array[secondIndex];//1
    array[secondIndex] = temp;//1
};

var indexOfMinimum = function(array, startIndex) {

    var minValue = array[startIndex];
    var minIndex = startIndex;

    for(var i = minIndex + 1; i < array.length; i++) {//n^2/2+n/2
        if(array[i] < minValue) {
            minIndex = i;
            minValue = array[i];
        }
    } 
    return minIndex;
}; 

var selectionSort = function(array) {//Theta(n^2)
    var position;
    for(var i = 0; i<array.length;i++){
        position = indexOfMinimum(array,i);
        swap(array,i,position);
    }
};
