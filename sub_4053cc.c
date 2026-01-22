// 函数: sub_4053cc
// 地址: 0x4053cc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

OLECHAR** var_1010 = arg1

if (arg3 s<= 0)
    int32_t* result = arg1
    sub_405368(result)
    return result

if (arg3 + 1 s< 0x7ff)
    uint32_t eax_1 = sub_404cc8(arg2, 0x7ff, &var_1010, arg3)
    
    if (eax_1 s> 0)
        return sub_405458(arg1, &var_1010, eax_1)

sub_4055c4(arg1, arg3 + 1)
int32_t ebx_3 = sub_404cc8(arg2, arg3 + 1, *arg1, arg3)

if (ebx_3 s< 0)
    ebx_3 = 0

return sub_4055c4(arg1, ebx_3)
