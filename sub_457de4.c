// 函数: sub_457de4
// 地址: 0x457de4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* result

if (*(arg1 + 0x57) != 0)
label_457e11:
    result = arg1
    
    if (result[0xc] != 0)
        result = sub_45fc28(arg1[0xc])
        
        if (result.b != 0)
            if ((arg1[0x14].b & 0x40) == 0)
                (*(*arg1 + 0x80))()
                return (*(*arg1 + 0x8c))()
            
            HDC hdc = GetDC(sub_45f888(arg1[0xc]))
            int32_t __saved_ebp
            int32_t* var_14_1 = &__saved_ebp
            int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
            TEB* fsbase
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            int32_t top = arg1[0x11]
            int32_t left = arg1[0x10]
            IntersectClipRect(hdc, left, top, left + arg1[0x12], top + arg1[0x13])
            void* ebp = sub_45d150(arg1[0xc], hdc, arg1)
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t var_14_2 = 0x457eda
            HDC hDC = *(ebp - 8)
            ExceptionList = sub_45f888(*(*(ebp - 4) + 0x30))
            return ReleaseDC(ExceptionList, hDC)
else
    result = arg1
    
    if ((result[7].b & 0x10) != 0)
        result = arg1
        
        if ((*(result + 0x51) & 4) == 0)
            goto label_457e11

return result
