// 函数: sub_425a88
// 地址: 0x425a88
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_3c = ebx
int32_t esi
int32_t var_40 = esi
int32_t edi
int32_t var_44 = edi
int32_t* var_38 = nullptr
int32_t var_34 = 0
int32_t* var_30 = nullptr
int32_t* var_2c = nullptr
int32_t (* var_10)(void* arg1, void* arg2) = nullptr
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = nullptr
int32_t var_18 = arg2
int32_t* var_48 = &var_4
int32_t (* var_4c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0

if (arg3 != 0)
    sub_404bdc(arg1 + 0x20, arg3)

int32_t i_4 = *(*(arg1 + 0x14) + 8)

if (i_4 == 0)
    arg2.b = 1
    sub_40451c(sub_40cf6c(sub_424df1+0x167, arg2, &data_4251e0))
else if (i_4 - 1 s>= 0)
    int32_t i_2 = i_4
    int32_t esi_1 = 0
    int32_t i
    
    do
        sub_406568(&var_10, *(sub_41a0f4(*(arg1 + 0x14), esi_1) + 4))
        sub_406594(&var_2c, var_10, 0x425d10, ExceptionList)
        char eax_11
        eax_11, arg2 = (*(*var_2c + 0x38))()
        
        if (eax_11 != 0)
            var_20 += 1
            int32_t var_c_1 = esi_1
        
        esi_1 += 1
        i = i_2
        i_2 -= 1
    while (i != 1)

if (var_20 == 0)
    arg2.b = 1
    sub_40451c(sub_40cf6c(sub_424df1+0x167, arg2, &data_4251e8))

void* ebp_2

if (var_20 == 1)
    ebp_2 = sub_4259f4(&var_4)
else if (*(arg1 + 0xc) == 0)
    ebp_2 = sub_4259f4(&var_4)
else
    int32_t ecx_2
    int32_t edx_8
    ecx_2, edx_8 = sub_406594(&ExceptionList_1, *(arg1 + 0xc), 0x425d20, ExceptionList)
    
    if (ExceptionList_1 != 0)
        edx_8.b = 1
        int32_t* eax_17 = sub_403c38(ecx_2, edx_8)
        int32_t* var_c_2 = &var_4
        var_10 = j_sub_40443c
        ExceptionList_1 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_1
        int32_t ebx_4 = *(*(arg1 + 0x14) + 8) - 1
        
        if (ebx_4 s>= 0)
            int32_t i_3 = ebx_4 + 1
            int32_t esi_2 = 0
            int32_t i_1
            
            do
                void* eax_22 = sub_41a0f4(*(arg1 + 0x14), esi_2)
                sub_406568(&var_10, *(eax_22 + 4))
                sub_406594(&var_30, var_10, 0x425d10, ExceptionList_1)
                
                if ((*(*var_30 + 0x38))() != 0)
                    (*(**(eax_22 + 4) + 0xc))()
                    (*(*eax_17 + 0x3c))()
                
                esi_2 += 1
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        if (ExceptionList_1->Next->__offset(0x14).d() s< 0)
            ebp_1 = sub_4259f4(&var_4)
        else
            sub_406568(&var_10, *((*(*eax_17 + 0x18))(arg1) + 4))
            sub_406594(&var_38, var_10, 0x425d10)
            (*(*var_38 + 0x3c))()
        
        fsbase->NtTib.ExceptionList = arg1
        __return_addr = &data_425cc0
        return sub_403c68(ebp_1[-8])
    
    ebp_2 = sub_4259f4(&var_4)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_48_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_425d08
sub_406550(ebp_2 - 0x34)
sub_404b88(ebp_2 - 0x30)
sub_405724(ebp_2 - 0x2c, 0x424e9c, 2)
sub_406550(ebp_2 - 0x10)
sub_406550(ebp_2 - 0xc)
return ebp_2 - 0xc
