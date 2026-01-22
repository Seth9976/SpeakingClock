// 函数: sub_493834
// 地址: 0x493834
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_18

if (sub_4937e4(arg3, &var_18) == 0)
    return (*(*arg1 + 8))()

if (sub_430cd8(arg1) != sub_430cd8(arg3))
    sub_431d30(arg1, sub_430cd8(arg3))

int32_t i = 0
char var_124[0x100]
char (* esi_1)[0x100] = &var_124
char var_224[0x100]
char (* edi_1)[0x100] = &var_224
char var_324[0x100]
char (* var_24_1)[0x100] = &var_324

do
    *esi_1 = sub_403370(float.t(i) * data_4939e8)
    *edi_1 = sub_403370(float.t(i) * data_4939f4)
    *var_24_1 = sub_403370(float.t(i) * data_493a00)
    i += 1
    var_24_1 = &(*var_24_1)[1]
    edi_1 = &(*edi_1)[1]
    esi_1 = &(*esi_1)[1]
while (i != 0x100)

char* result = arg2[3] - arg2[1] - 1

if (result s>= 0)
    void* i_2 = &result[1]
    int32_t var_14_1 = 0
    void* i_1
    
    do
        char* ebx_2 = sub_4936f0(sub_430d5c(arg3, arg2[1] + var_14_1), *arg2 * var_18)
        char* result_1 = sub_4936f0(sub_430d5c(arg1, arg4[1] + var_14_1), *arg4 * var_18)
        result = arg2[2] - *arg2 - 1
        
        if (result s>= 0)
            void* j_1 = &result[1]
            void* j
            
            do
                char ecx_4 =
                    var_124[zx.d(*ebx_2)] + var_324[zx.d(ebx_2[1])] + var_224[zx.d(ebx_2[2])]
                *result_1 = ecx_4
                result_1[1] = ecx_4
                result_1[2] = ecx_4
                ebx_2 = sub_4936f0(ebx_2, var_18)
                result = sub_4936f0(result_1, var_18)
                result_1 = result
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        var_14_1 += 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
