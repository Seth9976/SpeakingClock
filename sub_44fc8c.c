// 函数: sub_44fc8c
// 地址: 0x44fc8c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_1c = *arg1
char result_1
char* edi = &result_1
void* esi_1 = &arg1[1]
*edi = *esi_1
void* edi_1 = &edi[4]
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
uint32_t result = zx.d(result_1)

if (result.w != 0)
    int32_t nVirtKey = 0x10
    
    if (GetKeyState(nVirtKey) s< 0)
        result.w += 0x2000
    
    nVirtKey = 0x11
    
    if (GetKeyState(nVirtKey) s< 0)
        result.w += 0x4000
    
    char var_11
    
    if ((var_11 & 0x20) != 0)
        result.w -= 0x8000

return result
