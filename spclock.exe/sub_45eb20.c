// 函数: sub_45eb20
// 地址: 0x45eb20
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi
int32_t var_8 = esi
int32_t ecx
int32_t var_14 = ecx
var_14.b = arg2
int32_t result = sub_45683c(arg1, var_14.b)

if (*(arg1 + 0x57) != 0)
    int32_t edi_2 = sub_45b7f4(arg1) - 1
    
    if (edi_2 s>= 0)
        while ((var_14.b & result.b) == 0)
            esi.w = 0xffd0
            result.b |= sub_403e64(sub_45b7b8(arg1, edi_2), esi, zx.d(var_14.b))
            edi_2 -= 1
            
            if (edi_2 == 0xffffffff)
                break

return result
