// 函数: sub_4815b8
// 地址: 0x4815b8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = arg1[0x9c]

if (ebx != 0)
    int32_t eax_1
    int32_t ecx_1
    int32_t edx_2
    eax_1, edx_2, ecx_1 = (*(*ebx + 0x14))()
    
    if (eax_1 s> 0)
        edx_2.b = 1
        int32_t* eax_3 = sub_403c38(ecx_1, edx_2)
        arg1[0x9a] = eax_3
        arg1[0x9c]
        (*(*eax_3 + 8))()
        arg1[0x99] = sub_480e98(arg1)

HWND hWnd = GetFocus()

if (hWnd != 0)
    int32_t eax_8 = sub_45f888(arg1)
    BOOL eax_11
    
    if (hWnd != eax_8)
        eax_11 = IsChild(sub_45f888(arg1), hWnd)
    
    if (hWnd == eax_8 || eax_11 != 0)
        SetFocus(nullptr)

sub_45ea7c(arg1)
arg1[0x6d] = 0
return 0
