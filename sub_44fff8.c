// 函数: sub_44fff8
// 地址: 0x44fff8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax_1 = GetMenuItemCount(arg1)
void* ebx = arg2 - 0x200
uint32_t result = arg2 - 5
uint32_t result_1 = result

for (uint32_t uId = 0; uId s< eax_1; uId += 1)
    if (ebx u>= result_1)
        break
    
    sub_450600(uId, arg1, *(arg2 - 0x204), MF_BYPOSITION, result_1 - ebx, ebx)
    char* ebx_1 = sub_409c7c(ebx)
    result = GetMenuState(arg1, uId, MF_BYPOSITION)
    int16_t edi_1 = result.w
    
    if ((edi_1 & 2) != 0)
        *ebx_1 = 0x24
        ebx_1 = &ebx_1[1]
        *ebx_1 = 0
    
    if ((edi_1 & 0x40) != 0)
        *ebx_1 = 0x40
        ebx_1 = &ebx_1[1]
        *ebx_1 = 0
    
    if ((edi_1 & 1) != 0)
        *ebx_1 = 0x23
        ebx_1 = &ebx_1[1]
        *ebx_1 = 0
    
    *ebx_1 = 0x3b
    ebx = &ebx_1[1]
    *ebx = 0

return result
