// 函数: sub_42551c
// 地址: 0x42551c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t var_18 = 0
int32_t var_8 = 0
int32_t eax
int32_t var_c = eax
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
int32_t var_10 = sub_403c38(ecx, 1)
int32_t* var_c_1 = &var_4
int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t esi_2 = *(var_c_1[4] + 8) - 1

if (esi_2 s>= 0)
    int32_t i_1 = esi_2 + 1
    ExceptionList_1 = nullptr
    int32_t i
    
    do
        void* eax_7 = sub_41a0f4(var_c_1[4], ExceptionList_1)
        
        if ((*(**(eax_7 + 4) + 0x18))() != 0)
            (*(**(eax_7 + 4) + 0xc))()
            (*(*var_10_1 + 0x3c))()
        
        ExceptionList_1 = &ExceptionList_1->Next + 1
        i = i_1
        i_1 -= 1
    while (i != 1)

if ((*(*var_10_1 + 0x14))() != 1)
    if ((*(*var_10_1 + 0x14))() s> 0 && var_c_1[3] != 0)
        (*(*var_10_1 + 0x90))()
        ExceptionList_1 = (*(*var_c_1[3] + 0x10))()
        sub_406568(&var_8, *((*(*var_10_1 + 0x18))() + 4))
else
    sub_406568(&var_8, *((*(*var_10_1 + 0x18))() + 4))

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_425630
return sub_403c68(var_10_1)
