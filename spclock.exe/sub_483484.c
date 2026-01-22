// 函数: sub_483484
// 地址: 0x483484
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (sub_465ac4(sub_4659bc()) == 0)
    return (*(*arg1 - 0x10))()

void* const result = *(arg2 + 8)

if (*(result + 8) == 0xfffffff4)
    void* const result_1 = result
    int32_t eax_2 = *(result_1 + 0xc)
    result = eax_2 - 1
    
    if (eax_2 == 1)
        *(arg2 + 0xc) = 0x20
    else if (result == 0x10000)
        int32_t eax_4 = *(result_1 + 0x24)
        RECT var_3c
        int32_t esi
        
        if (eax_4 == 1)
            (*(*arg1 + 0x44))()
            esi.w = 0xffb3
            
            if (sub_403e64(arg1, esi) != 0)
                sub_458ac8(arg1, 0)
                InflateRect(&var_3c, 0xffffffff, 0xffffffff)
            
            int32_t eax_12 = sub_45f888(arg1)
            void* eax_13 = sub_4659bc()
            sub_465c5c(*(result_1 + 0x10), eax_12, eax_13, &var_3c, 0, nullptr)
        else if (eax_4 == 3)
            SendMessageA(sub_45f888(arg1), 0x419, 0, &var_3c)
            int32_t var_40_1 = 0
            esi.w = 0xffb3
            
            if (sub_403e64(arg1, esi) != 0)
                var_40_1 = 1
            
            if (arg1[0x94].b != 0)
                (*(*arg1 + 0x44))(var_40_1)
                int32_t var_1c
                var_3c.top = var_1c + var_40_1
                (*(*arg1 + 0x44))()
                int32_t var_14
                var_3c.bottom = var_14 - var_40_1
            else
                (*(*arg1 + 0x44))(var_40_1)
                int32_t var_20
                var_3c.left = var_20 + var_40_1
                (*(*arg1 + 0x44))()
                int32_t var_18
                var_3c.right = var_18 - var_40_1
            
            HRGN eax_34 = CreateRectRgn(var_3c.left, var_3c.top, var_3c.right, var_3c.bottom)
            SelectClipRgn(*(result_1 + 0x10), eax_34)
            sub_4659bc()
            int32_t edx_2
            edx_2.b = 0x22
            void var_2c
            sub_466038(&var_2c, edx_2)
            int32_t eax_37 = sub_45f888(arg1)
            void* eax_38 = sub_4659bc()
            sub_465c5c(*(result_1 + 0x10), eax_37, eax_38, 0, 0, &var_2c)
            DeleteObject(eax_34)
            SelectClipRgn(*(result_1 + 0x10), nullptr)
        result = nullptr
        *(arg2 + 0xc) = 0
    else
        result = nullptr
        *(arg2 + 0xc) = 0

return result
