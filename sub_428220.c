// 函数: sub_428220
// 地址: 0x428220
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
int32_t var_24 = 0
int32_t var_1c = 0
int32_t* var_20 = nullptr
int32_t* var_c = arg2
int32_t* var_34 = &var_4
int32_t (* var_38)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_41b378(var_c)
int32_t* var_40 = &var_4
int32_t (* var_44)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 =
    (*(**(arg1 + 8) + 0x14))(ExceptionList, var_44, var_40, ExceptionList_1, var_38, var_34) - 1

if (eax_4 s>= 0)
    int32_t i_1 = eax_4 + 1
    void* var_10_1 = nullptr
    int32_t i
    
    do
        (*(**(arg1 + 8) + 0xc))(&data_428358)
        var_c = var_20
        void* const var_10_2 = &data_428364
        sub_404f1c(&var_1c, 3)
        (*(*var_c + 0x38))(arg1)
        int32_t* eax_12 = (*(**(arg1 + 8) + 0x18))()
        int32_t ebx_3 = (*(*eax_12 + 0x14))() - 1
        
        if (ebx_3 s>= 0)
            int32_t j_1 = ebx_3 + 1
            int32_t esi_1 = 0
            int32_t j
            
            do
                (*(*eax_12 + 0xc))()
                (*(*var_c + 0x38))()
                esi_1 += 1
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        (*(*var_c + 0x38))()
        var_10_1 = var_10_2 + 1
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_428325
return sub_41b434(var_c)
