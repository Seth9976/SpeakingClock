// 函数: sub_43c300
// 地址: 0x43c300
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HDC hDC_1
HDC hDC = hDC_1
int32_t* ebx = arg2

if (*ebx == 0x112)
    return (*(*arg1 + 0x78))()

int32_t eax_1 = *ebx
int32_t* result

if (eax_1 u< 0x100 || eax_1 u> 0x109)
label_43c368:
    arg1[0xa2]
    (*(*arg1 + 0x104))(arg1[0xa6])
    result = *ebx
    
    if (result == 0x201)
        goto label_43c3bc
    
    uint32_t ExceptionList
    
    if (result == 0x30)
        result = data_4ac1d0
        
        if (*result != 0)
            LPARAM lParam = 0
            WPARAM wParam_1 = 3
            ExceptionList = 0xd3
            return SendMessageA(arg1[0xa2], ExceptionList, wParam_1, lParam)
    else if (result == 0x200)
        ebx[1]
        return sub_458ac8(arg1, ebx[2])
    
    if (result == 0x203)
    label_43c3bc:
        result = arg1
        
        if (*(result + 0x5d) == 1)
            int32_t point
            GetCursorPos(&point)
            int32_t point_1
            sub_457310(arg1, &point, &point_1)
            point = point_1
            int16_t var_2c
            int16_t var_16_1 = var_2c
            LPARAM lParam_1 = point.w.d
            WPARAM wParam = 0
            ExceptionList = 0x202
            SendMessageA(arg1[0xa2], ExceptionList, wParam, lParam_1)
            return sub_457f4c(arg1, 0, 0xffffffff)
    else if (result == 0xb04d)
        result = arg1
        
        if (result[0xaa] == 0)
            HDC eax_22 = GetDC(arg1[0xa2])
            int32_t* var_3c_6 = &hDC
            int32_t (* var_40_1)(void* arg1, void* arg2) = j_sub_40443c
            TEB* fsbase
            ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            void var_28
            GetWindowRect(arg1[0xa2], &var_28)
            int32_t* var_48_4 = &hDC
            void* ebp =
                sub_43c278(eax_22, &var_28, MapWindowPoints(nullptr, arg1[0xa2], &var_28, 2))
            fsbase->NtTib.ExceptionList = arg1
            __return_addr = &data_43c505
            *(*(ebp - 4) + 0x2a8) = 0xffffffff
            hDC = *(ebp - 8)
            return ReleaseDC(*(*(ebp - 4) + 0x288), hDC)
else
    arg2.b = 1
    int32_t* eax_3 = sub_46bf14(arg1)
    
    if (eax_3 == 0)
        goto label_43c368
    
    result = (*(*eax_3 + 0x100))()
    
    if (result.b == 0)
        goto label_43c368

return result
