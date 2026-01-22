// 函数: sub_44e510
// 地址: 0x44e510
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = arg2
void* result = *(arg1 + 0x64)

if (result != 0)
    int32_t eax = sub_44e490(result)
    
    if (esi s< 0)
        esi = 0
    
    if (eax s<= esi)
        esi = eax - 1
    
    result = sub_44e4f8(arg1)
    
    if (esi != result)
        int32_t edi_1 = *(arg1 + 0x64)
        sub_44e82c(edi_1)
        return sub_44e61c(edi_1, esi, arg1)

return result
