function closestNumbers(arr) {
    let ans = [];
    arr.sort((a, b) => a - b);
    let least_diff = Number.MAX_SAFE_INTEGER;
    for (let i = 0; i < arr.length - 1; i++) 
        if (arr[i+1] - arr[i] < least_diff)
            least_diff = arr[i+1] - arr[i];
    for (let i = 0; i < arr.length - 1; i++) 
        if (arr[i+1] - arr[i] == least_diff) {
            ans.push(arr[i]);
            ans.push(arr[i + 1]);
        }
    return ans;
}