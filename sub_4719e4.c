// 函数: sub_4719e4
// 地址: 0x4719e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t i_1
int32_t i_2 = i_1
int32_t* eax_1 = sub_46fc94(arg1)
void* eax_2 = arg1[0xcb]

if (eax_2 != 0)
    i_1 = *(eax_2 + 8) - 1
    
    if (i_1 s>= 0)
        i_1 += 1
        int32_t ebx_1 = 0
        int32_t i
        
        do
            if (sub_45fc28(sub_41a0f4(arg1[0xcb], ebx_1)) != 0
                    && sub_41a150(eax_1, sub_41a0f4(arg1[0xcb], ebx_1)) s< 0)
                sub_419f9c(eax_1, sub_41a0f4(arg1[0xcb], ebx_1))
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

if (arg1[0xd0] == 0)
    if ((arg1[7].b & 8) == 0)
        i_1.w = 0xffa8
        HWND hWnd = sub_403e64(arg1, i_1)
        
        if (hWnd != 0 && hWnd != *(data_4b1ce0 + 0x30))
            int32_t wParam = sub_4782dc(data_4b1ce0, arg1)
            int32_t var_18_1 = arg1[0x6d]
            int32_t eax_26
            eax_26.b = arg1[0xd1] != 0
            char var_14_1 = eax_26.b
            SendMessageA(hWnd, 0xb048, &wParam, *(data_4b1ce0 + 0xc8))
    
    arg1[0xd1] = 0
else if (sub_41a150(sub_46fc94(arg1[0xd0]), arg1) s< 0
        && sub_41a150(sub_46fc6c(arg1[0xd0]), arg1) s> 0xffffffff)
    sub_419f9c(sub_46fc94(arg1[0xd0]), arg1)

if (*data_4ac1d0 != 0)
    SendMessageA(sub_45f888(arg1), 0x80, 1, 0)

if (arg1[0xa4] != 0 && *(arg1 + 0x277) != 1)
    SetMenu(sub_45f888(arg1), nullptr)
    sub_4501b8(arg1[0xa4], 0)

return sub_45ea7c(arg1)
