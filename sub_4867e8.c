// 函数: sub_4867e8
// 地址: 0x4867e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* var_14 = arg3
int32_t result_1 = arg2
sub_4052a8(arg3, sub_404e48(arg1))
int32_t result = sub_404e48(arg1)
int32_t edi = result

if (edi s> 0)
    int32_t ebx_1 = 1
    int32_t i
    
    do
        void* eax_5 = j_sub_40502c(arg3)
        *(eax_5 + ebx_1 - 1) = *(arg1 + ebx_1 - 1) ^ (result_1 u>> 8).b
        result = (result_1 + zx.d(*(*arg3 + ebx_1 - 1))) * 0xce6d + 0x58bf
        result_1 = result
        ebx_1 += 1
        i = edi
        edi -= 1
    while (i != 1)

return result
