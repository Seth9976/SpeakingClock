// 函数: sub_43d155
// 地址: 0x43d155
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
void* entry___return_addr
*(entry___return_addr + 0x4f) += arg1.b
void* const __return_addr_1 = __return_addr
*__return_addr_1 += __return_addr_1.b
*__return_addr_1 += __return_addr_1.b
__return_addr = entry___return_addr
sub_43cce4(__return_addr_1)
*(__return_addr_1 + 0x290) = sub_45f888(__return_addr_1)

if (*(__return_addr_1 + 0x2c0) != 0)
    (*(**(__return_addr_1 + 0x284) + 8))(arg4 - 2)
    sub_403c68(*(__return_addr_1 + 0x2c0))
    *(__return_addr_1 + 0x2c0) = 0
    
    if (*(__return_addr_1 + 0x2a8) != 0xffffffff)
        if ((*(**(__return_addr_1 + 0x284) + 0x14))() s< *(__return_addr_1 + 0x2a8))
            *(__return_addr_1 + 0x2a8) = (*(**(__return_addr_1 + 0x284) + 0x14))()
        
        SendMessageA(sub_45f888(__return_addr_1), 0x14e, *(__return_addr_1 + 0x2a8), 0)
        *(__return_addr_1 + 0x2a8) = 0xffffffff

if (*(__return_addr_1 + 0x2be) u< 2)
    HWND hWnd = GetWindow(sub_45f888(__return_addr_1), GW_CHILD)
    
    if (hWnd != 0)
        if (*(__return_addr_1 + 0x2be) == 1)
            *(__return_addr_1 + 0x28c) = hWnd
            *(__return_addr_1 + 0x2a0) = GetWindowLongA(hWnd, 0xfffffffc)
            SetWindowLongA(*(__return_addr_1 + 0x28c), 0xfffffffc, *(__return_addr_1 + 0x29c))
            hWnd = GetWindow(hWnd, GW_HWNDNEXT)
        
        *(__return_addr_1 + 0x288) = hWnd
        *(__return_addr_1 + 0x298) = GetWindowLongA(hWnd, 0xfffffffc)
        SetWindowLongA(*(__return_addr_1 + 0x288), 0xfffffffc, *(__return_addr_1 + 0x294))

void* result = data_4ac1d0

if (*result != 0 && *(__return_addr_1 + 0x288) != 0)
    return SendMessageA(*(__return_addr_1 + 0x288), 0xd3, 3, 0)

return result
