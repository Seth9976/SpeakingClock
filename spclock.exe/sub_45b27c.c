// 函数: sub_45b27c
// 地址: 0x45b27c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* result = sub_45fc28(arg1)

if (result.b != 0)
    result = arg1
    
    if ((result[7].b & 8) == 0)
        if (arg1[0x64].w == 0)
            sub_45b310(arg1)
            int32_t* var_20 = &var_4
            int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
            TEB* fsbase
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            (*(*arg1 + 0x44))(ExceptionList, var_24, var_20)
            (*(*arg1 + 0x94))(arg1)
            fsbase->NtTib.ExceptionList = arg1
            __return_addr = &data_45b30a
            arg1[0x15].w &= 0xffef
            return sub_45b318(arg1)
        
        result = arg1
        result[0x15].w |= 0x10

return result
