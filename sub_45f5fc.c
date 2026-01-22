// 函数: sub_45f5fc
// 地址: 0x45f5fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = *(arg1 + 0x30)

if (ebx == 0)
    HWND hWnd = *(arg1 + 0x1b4)
    
    if (hWnd != 0)
        SetWindowPos(hWnd, zx.d(*(((arg2 & 0x7f) << 1) + &data_4ab92c)), 0, 0, 0, 0, 0x3)
    
    return 

void* const ecx_1

if (arg2.b == 0)
    ecx_1 = nullptr
else
    ecx_1 = *(*(ebx + 0x1d0) + 8) - 1

int32_t edx_1 = 0
void* esi = *(ebx + 0x1cc)

if (esi != 0)
    edx_1 = *(esi + 8)

sub_45f524(arg1, ecx_1 + edx_1)
