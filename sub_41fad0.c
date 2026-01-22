// 函数: sub_41fad0
// 地址: 0x41fad0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
BSTR var_c = nullptr
int32_t var_10 = 0
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char eax_1
int32_t ecx
eax_1, ecx = sub_41e028(arg1)
char temp1_1

if (eax_1 != 6)
    temp1_1 = eax_1 - 6

if (eax_1 != 6 && temp1_1 != 6)
    var_c = nullptr
    char eax_5 = sub_41fbb4(ecx)
    
    if (eax_5 == 0x12)
        sub_41e04c(arg1, &var_c, 4)
        sub_4055c4(arg2, var_c)
        sub_41e04c(arg1, *arg2, var_c * 2)
    else if (eax_5 == 0x14)
        sub_41e04c(arg1, &var_c, 4)
        sub_4052a8(&var_8, var_c)
        sub_41e04c(arg1, var_8, var_c)
        ebp_1 = sub_406928(var_8, arg2)
    else
        sub_41da5c()
else
    int32_t ecx_1
    int32_t esi_2
    ecx_1, ebp_1, esi_2 = sub_41fa14(arg1, &var_10)
    esp = &var_8
    sub_4054c8(ecx_1, ebp_1[-3])

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_41fbae
sub_404b88(&ebp_1[-3])
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
