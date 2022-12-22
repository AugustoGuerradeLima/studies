var mergeSort = function(array,p,r){
    if(p<r){
        var q = Math.floor((p+r)/2);
        mergeSort(array,p,q);
        mergeSort(array,q+1,r);
        merge(array,p,q,r);
    }
}
