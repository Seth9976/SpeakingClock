// 函数: sub_48277c
// 地址: 0x48277c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi
esi.w = 0xffb3
char eax_1 = sub_403e64(arg1, esi)
BOOL eax_4

if (eax_1 == 0)
    HWND hWnd = GetFocus()
    eax_4 = IsChild(sub_45f888(arg1), hWnd)

if ((eax_1 != 0 || eax_4 != 0) && *(arg2 + 4) == 9 && GetKeyState(0x11) s< 0)
    int16_t eax_6
    int32_t edx
    eax_6, edx = GetKeyState(0x10)
    edx.b = eax_6 s>= 0
    void* result = sub_482554(arg1, edx, 1)
    *(arg2 + 0xc) = 1
    return result

return sub_45ecd4()
