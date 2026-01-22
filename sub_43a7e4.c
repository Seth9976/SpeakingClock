// 函数: sub_43a7e4
// 地址: 0x43a7e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0x66] != 0)
    char eax_1
    int32_t ecx_1
    eax_1, ecx_1 = (*(*arg1 + 0x50))()
    esp = &var_8
    
    if (eax_1 != 0 && arg1[0x68].b != 0)
        int32_t ecx_2 = sub_4577d8(ecx_1, &var_8)
        *(arg2 + 4)
        char eax_4
        int32_t esi_1
        eax_4, ebp_1, esi_1 = sub_46be60(ecx_2, var_8)
        
        if (eax_4 != 0)
            int32_t* ebx_2 = arg1[0x66]
            esi_1.w = 0xffb6
            
            if (sub_403e64(ebx_2, esi_1) != 0)
                (*(*ebx_2 + 0xd4))()
                *(arg2 + 0xc) = 1

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_43a878
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
