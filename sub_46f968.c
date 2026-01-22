// 函数: sub_46f968
// 地址: 0x46f968
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x277) != 2 || arg1[0xa7] == 0)
    return 

WPARAM wParam = 0
int32_t* eax = arg1[0xa4]

if (eax != 0)
    wParam = (*(*eax + 0x34))()

LPARAM lParam = 0
void* eax_2 = arg1[0xa8]

if (eax_2 != 0)
    lParam = sub_44b944(eax_2)

int32_t ebx
ebx.b = wParam != GetMenu(sub_45f888(arg1))
SendMessageA(arg1[0xa7], 0x230, wParam, lParam)

if (ebx.b != 0)
    DrawMenuBar(sub_45f888(arg1))
