// 函数: sub_4a3418
// 地址: 0x4a3418
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_170 = ebx
int32_t var_16c = 0
int32_t var_168 = 0
uint16_t var_164[0xa]
sub_405608(&var_164, sub_407f68)
int32_t* var_174 = &var_4
int32_t (* var_178)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_180 = *data_4ac0e4
void* const var_184 = "voice\"
void* const var_188 = "*.DLL"
sub_404f1c(&var_168, 3)

if (sub_40993c(var_168, 0x3f, &var_164) != NO_ERROR)
    (*(**data_4ac2c8 + 0x38))()
else
    enum WIN32_ERROR i
    
    do
        void* var_150
        void* ebx_2 = var_150
        
        if (ebx_2 != 0)
            ebx_2 = *(ebx_2 - 4)
        
        sub_405080(ebx_2 - 4, 1, var_150, &var_16c)
        (*(**data_4ac2c8 + 0x38))()
        i = sub_40998c(&var_164)
    while (i == NO_ERROR)
    sub_4099b0(&var_164)

int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4a3530
sub_404b88(&var_16c)
sub_404b88(&var_168)
uint16_t (* result)[0xa] = &var_164
sub_4056d8(result, sub_407f68)
return result
