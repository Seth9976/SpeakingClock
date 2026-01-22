// 函数: sub_4941c0
// 地址: 0x4941c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_20

if (sub_4937e4(arg3, &var_20) == 0)
    return (*(*arg1 + 8))()

if (sub_430cd8(arg1) != sub_430cd8(arg3))
    sub_431d30(arg1, sub_430cd8(arg3))

int32_t i_2 = arg2[3] - arg2[1]

if (i_2 s> (*(*arg1 + 0x20))() - arg5[1])
    i_2 = (*(*arg1 + 0x20))() - arg5[1]

char* result_2 = arg2[2] - *arg2
char* result = (*(*arg1 + 0x2c))() - *arg5

if (result s< result_2)
    result = (*(*arg1 + 0x2c))() - *arg5
    result_2 = result

if (i_2 - 1 s>= 0)
    int32_t i_1 = i_2
    int32_t var_14_1 = 0
    int32_t i
    
    do
        char* edi_1 = sub_4936f0(sub_430d5c(arg3, arg2[1] + var_14_1), *arg2 * var_20)
        char* result_1 = sub_4936f0(sub_430d5c(arg1, arg5[1] + var_14_1), *arg5 * var_20)
        result = result_2 - 1
        
        if (result s>= 0)
            void* j_1 = &result[1]
            void* j
            
            do
                *result_1 = sub_493820(zx.d(*edi_1) + sx.d(arg4))
                result_1[1] = sub_493820(zx.d(edi_1[1]) + sx.d(arg4))
                result_1[2] = sub_493820(zx.d(edi_1[2]) + sx.d(arg4))
                edi_1 = sub_4936f0(edi_1, var_20)
                result = sub_4936f0(result_1, var_20)
                result_1 = result
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        var_14_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
