// 函数: sub_45c470
// 地址: 0x45c470
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
HWND hWndNewParent = arg2
uint32_t result = arg1

if (*(result + 0x30) == 0)
    result = arg1
    
    if (hWndNewParent != *(result + 0x1c4))
        if (*(arg1 + 0x1b4) != 0 && *(arg1 + 0x1c4) != 0 && hWndNewParent != 0)
            *(arg1 + 0x1c4) = hWndNewParent
            SetParent(*(arg1 + 0x1b4), hWndNewParent)
            
            if (*data_4ac120 s>= 5 && *data_4ac4d0 == 2)
                sub_458ac8(arg1, 0)
            
            return sub_45c37c(arg1)
        
        arg2.b = 1
        sub_460db8(arg1, arg2)
        int32_t* var_10_3 = &var_4
        int32_t (* var_14_2)(void* arg1, void* arg2) = j_sub_40443c
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        (*(*arg1 + 0xb0))(ExceptionList, var_14_2, var_10_3)
        *(arg1 + 0x1c4) = hWndNewParent
        void* ebp_1 = sub_45c37c(arg1)
        fsbase->NtTib.ExceptionList = arg1
        __return_addr = &data_45c550
        return sub_460db8(*(ebp_1 - 4), 0)

return result
