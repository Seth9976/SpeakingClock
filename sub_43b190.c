// 函数: sub_43b190
// 地址: 0x43b190
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HDC hDC_1
HDC hDC = hDC_1
int32_t eax_1 = *arg2

if (eax_1 == 7)
    if (*data_4ac4d0 == 1 && IsWindow(arg2[1]) == 0)
        arg2[1] = 0
else
    uint32_t ExceptionList
    
    if (eax_1 == 0xb04d)
        if (arg1[0x9b] == 0)
            HDC eax_27 = GetDC(sub_45f888(arg1))
            int32_t* var_28_3 = &hDC
            int32_t (* var_2c_1)(void* arg1, void* arg2) = j_sub_40443c
            TEB* fsbase
            ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            void var_20
            void* ebp = sub_43b10c(eax_27, &var_20, 
                (*(*arg1 + 0x44))(&hDC, ExceptionList, var_2c_1, var_28_3))
            fsbase->NtTib.ExceptionList = arg1
            __return_addr = &data_43b2f4
            *(*(ebp - 4) + 0x26c) = 0xffffffff
            hDC = *(ebp - 0xc)
            return ReleaseDC(sub_45f888(*(ebp - 4)), hDC)
    else if (eax_1 == 0xbd33 && arg1[0x90].b != 0)
        char eax_11
        int32_t ecx
        int32_t edx
        eax_11, edx = sub_433cec(ecx)
        
        if (eax_11 != 0 && arg1[0x9b] == 0xffffffff)
            edx.b = 1
            int32_t* eax_14 = sub_46bf14(arg1)
            
            if (eax_14 != 0 && sub_478924(sub_478638(eax_14)) != 0
                    && sub_47895c(sub_478638(eax_14), arg1) != 0)
                arg1[0x9b] = 0
                LPARAM lParam = 0
                WPARAM wParam = 0
                ExceptionList = 0xb04d
                PostMessageA(sub_45f888(arg1), ExceptionList, wParam, lParam)

return sub_45ce7c(arg1, arg2)
