// 函数: sub_455d14
// 地址: 0x455d14
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_c = arg1[1]
HWND hWnd_1
uint32_t ecx
int32_t edx
hWnd_1, ecx, edx = WindowFromPoint(*arg1)
HWND hWnd = hWnd_1
HANDLE result = nullptr
HWND hWnd_2

for (; hWnd != 0; hWnd = hWnd_2)
    result = sub_454230(hWnd, edx, ecx)
    
    if (result != 0)
        break
    
    hWnd_2, ecx, edx = GetParent(hWnd)

return result
