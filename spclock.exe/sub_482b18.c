// 函数: sub_482b18
// 地址: 0x482b18
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_459448(arg1, arg2)
int32_t eax_1 = *(arg2 + 8)
int32_t var_10 = sx.d(eax_1.w)
int32_t var_c = sx.d(eax_1:2.w)
void* result = sub_482a88(arg1, &var_10)

if (result != 0 && *(arg1 + 0x26d) == 0)
    return sub_457f4c(result, 0, 0xffffffff)

return result
