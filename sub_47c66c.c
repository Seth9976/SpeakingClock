// 函数: sub_47c66c
// 地址: 0x47c66c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
char* var_c = nullptr
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t ebx_1 = arg2
int32_t* esi_1 = arg1
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (ebx_1.b != *(esi_1 + 0x269))
    if (ebx_1.b != 0)
        char eax = ebx_1.b
        char temp1_1
        
        if (eax != 1)
            temp1_1 = eax - 1
        
        if (eax == 1 || temp1_1 == 3)
            arg2.b = 1
        else
            arg2 = 0
        
        int32_t ecx_1 = sub_43e228(esi_1, arg2.b)
        char eax_2 = ebx_1.b
        char temp3_1
        
        if (eax_2 != 2)
            temp3_1 = eax_2 - 2
        
        if (eax_2 == 2 || temp3_1 == 3)
            eax_2 = 1
        else
            eax_2 = 0
        
        *(esi_1 + 0x259) = eax_2
        
        if ((esi_1[7].b & 1) != 0)
            sub_4577d8(ecx_1, &var_8)
            
            if (var_8 == 0 || (esi_1[7].b & 1) == 0)
            label_47c6e8:
                void** edi_1 = *((zx.d(ebx_1.b) << 2) + &data_4abb8c)
                
                if (edi_1 != 0)
                    sub_406a30(edi_1, &var_c)
                    ebx_1, ebp_1, esi_1 = sub_457808(esi_1, var_c)
        else if ((esi_1[7].b & 1) == 0)
            goto label_47c6e8
        
        esi_1[0x97] = *((zx.d(ebx_1.b) << 2) + &data_4abbb8)
        void* eax_10 = sub_479a58(ebx_1)
        sub_479fe8(esi_1[0x99], eax_10)
        sub_47c8cc(esi_1, 2)
        *(esi_1 + 0x275) = 0
    
    *(esi_1 + 0x269) = ebx_1.b
    (*(*esi_1 + 0x80))()
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_47c770
sub_404b88(&ebp_1[-2])
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
