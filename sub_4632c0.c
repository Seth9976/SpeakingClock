// 函数: sub_4632c0
// 地址: 0x4632c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
int32_t edi
int32_t var_2c = edi
int32_t ebx_1 = arg2
arg2.b = 1
int32_t* eax = sub_42bd40(sub_45171c+0x240, arg2)
int32_t* var_30 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
sub_45607c(eax, arg1[5])
sub_42c308(eax)
int32_t* var_3c = &var_4
int32_t (* var_40)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_42c7c4(eax, ebx_1)
int32_t* var_48 = &var_4
int32_t (* var_4c)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_6 = sub_45b7f4(arg1[5]) - 1

if (eax_6 s>= 0)
    int32_t i_1 = eax_6 + 1
    int32_t var_c_1 = 0
    int32_t i
    
    do
        void* eax_9 = sub_45b7b8(arg1[5], var_c_1)
        
        if (*(eax_9 + 0x57) != 0 && *(eax_9 + 0x94) == arg1[5])
            void var_20
            sub_4570f0(eax_9, &var_20)
            (**arg1)()
            (*(*arg1 + 4))()
            (*(*arg1 + 0x20))(&var_20)
        
        var_c_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_48_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, 
    int32_t arg6, int32_t arg7) = sub_4633b1
return sub_42c7c4(eax, 0)
