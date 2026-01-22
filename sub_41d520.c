// 函数: sub_41d520
// 地址: 0x41d520
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = nullptr
int64_t* esi = *(arg1 + 0x14)
char* ebx = esi

while (true)
    char edx_1 = *ebx
    
    if (edx_1 == 0)
        break
    
    if (edx_1 == 0x2e)
        break
    
    ebx = &ebx[1]

if (*ebx != 0)
    void* ebp_2 = ebx - esi
    sub_404c78(arg1 + 0x10, esi, ebp_2)
    sub_4050c0(arg1 + 0x14, 1, ebp_2 + 1)
    result.b = 1

return result
