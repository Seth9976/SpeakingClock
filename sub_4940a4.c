// 函数: sub_4940a4
// 地址: 0x4940a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_18

if (sub_4937e4(arg3, &var_18) == 0)
    return (*(*arg1 + 8))()

if (sub_430cd8(arg1) != sub_430cd8(arg3))
    sub_431d30(arg1, sub_430cd8(arg3))

char* result = arg2[3] - arg2[1] - 1

if (result s>= 0)
    void* i_1 = &result[1]
    int32_t var_14_1 = 0
    void* i
    
    do
        char* ebx_2 = sub_4936f0(sub_430d5c(arg3, arg2[1] + var_14_1), *arg2 * var_18)
        char* result_1 = sub_4936f0(sub_430d5c(arg1, arg4[1] + var_14_1), *arg4 * var_18)
        result = arg2[2] - *arg2 - 1
        
        if (result s>= 0)
            void* j_1 = &result[1]
            void* j
            
            do
                *result_1 = 0xff - *ebx_2
                result_1[1] = 0xff - ebx_2[1]
                result_1[2] = 0xff - ebx_2[2]
                ebx_2 = sub_4936f0(ebx_2, var_18)
                result = sub_4936f0(result_1, var_18)
                result_1 = result
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        var_14_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
