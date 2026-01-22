// 函数: sub_4a094c
// 地址: 0x4a094c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t* var_c = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_4abe2c == 0)
    sub_4a08a0(&var_8)
    
    if (var_8 != 0 && sub_40984c(var_8) != 0)
        data_4abe2c = LoadLibraryA(sub_405018(var_8))
        
        if (data_4abe2c != 0)
            data_4b1dd4 = GetProcAddress(data_4abe2c, &data_4a0a00)
            data_4b1dd8 = GetProcAddress(data_4abe2c, &data_4a0a0c)
            data_4b1ddc = GetProcAddress(data_4abe2c, &data_4a0a00)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_c_1)(int32_t arg1) = sub_4a09fa
int32_t* result = &var_8
sub_404b88(result)
return result
