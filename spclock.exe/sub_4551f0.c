// 函数: sub_4551f0
// 地址: 0x4551f0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg1[1]
HWND hWnd_1
uint32_t ecx
int32_t edx
hWnd_1, ecx, edx = WindowFromPoint(*arg1)
HWND hWnd_2
HWND hWnd

for (hWnd = hWnd_1; hWnd != 0; hWnd = hWnd_2)
    if (sub_455190(hWnd, edx, ecx) != 0)
        break
    
    hWnd_2, ecx, edx = GetParent(hWnd)

return hWnd
