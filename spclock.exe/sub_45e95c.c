// 函数: sub_45e95c
// 地址: 0x45e95c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* var_8_1 = arg2
char result

if ((*(var_8_1 + 4) & 0xfff0) == 0xf100 && *(var_8_1 + 8) != 0x20 && *(var_8_1 + 8) != 0x2d)
    BOOL eax_6
    eax_6, arg2 = IsIconic(arg1[0x6d])
    
    if (eax_6 == 0)
        HWND eax_7
        eax_7, arg2 = GetCapture()
        
        if (eax_7 == 0 && arg1 != *(*data_4ac2fc + 0x44))
            arg2.b = 1
            int32_t* eax_11
            eax_11, arg2 = sub_46bf14(arg1)
            
            if (eax_11 != 0)
                result, arg2 = sub_458ac8(eax_11, var_8_1)

if ((*(var_8_1 + 4) & 0xfff0) == 0xf100)
    int32_t __saved_ebp
    int32_t* var_14_3 = &__saved_ebp
    result = sub_45e8ac(arg1, arg2)
    
    if (result != 0)
        return result

return (*(*arg1 - 0x10))()
