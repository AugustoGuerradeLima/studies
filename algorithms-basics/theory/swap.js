var swap = function(array, firstIndex, secondIndex) {
	var n = array[firstIndex];
	array[firstIndex] = array[secondIndex];
	array[secondIndex] = n;
};

var testArray = [7, 9, 4];
swap(testArray, 0, 1);

println(testArray);

Program.assertEqual(testArray, [9, 7, 4]);

swap(testArray,0,2);
Program.assertEqual(testArray,[4,7,9]);

swap(testArray,0,1);
Program.assertEqual(testArray,[7,4,9]);
