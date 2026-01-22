// 函数: sub_45c0f4
// 地址: 0x45c0f4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1[0x6d] == 0)
    return 

void* eax = arg1[0x74]

if (eax != 0)
    int32_t ebx_2 = *(eax + 8) - 1
    
    if (ebx_2 s>= 0)
        int32_t i_1 = ebx_2 + 1
        int32_t edi_1 = 0
        int32_t i
        
        do
            (*(*sub_41a0f4(arg1[0x74], edi_1) + 0xb0))()
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

HWND hWndParent = arg1[0x6d]
HWND lParam = hWndParent
int32_t var_10
var_10.b = (*(arg1 + 0x55) & 0x20) != 0
EnumChildWindows(hWndParent, sub_45c0b0, &lParam)
(*(*arg1 + 0xb8))(lParam, var_10)
