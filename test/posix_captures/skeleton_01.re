// re2c $INPUT -o $OUTPUT -i --posix-captures --fixed-tags toplevel
// this revealed a bug in the calculation of maximal skeleton path length
// (generated by fuzzer)

/*!re2c
    (([^b]{1,3}){0,3}("aac"|[^a]+))* {}
    [ab][b] {}
    "" {}
*/
