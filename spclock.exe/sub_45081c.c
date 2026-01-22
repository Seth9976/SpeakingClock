// 函数: sub_45081c
// 地址: 0x45081c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

(*(*arg1 + 0x38))(0)
LRESULT hWnd = arg1[0xe]

if (hWnd == 0)
    return hWnd

return SendMessageA(hWnd, 0xb015, 0, 0)
