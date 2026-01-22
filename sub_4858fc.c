// 函数: sub_4858fc
// 地址: 0x4858fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* edi = *(arg2 + 8)
int32_t eax = *(edi + 8)

if (eax == 0x701)
    return (*(*arg1 + 0x100))()

if (eax == 0x702)
    int32_t* esi
    esi.w = 0xffaf
    return sub_403e64(arg1, esi)

char result

if (eax == 0x704)
    result = sub_4859a8(arg1, *(edi + 0x18), *(edi + 0x1c))
    
    if (result == 0)
        *(arg2 + 0xc) = 1
else
    result = (eax - 0x704).b - 4
    
    if (eax == 0x708)
        result = sub_485978(arg1, *(edi + 0xc), *(edi + 0x10))
        
        if (result == 0)
            *(arg2 + 0xc) = 1

return result
