// 函数: sub_486280
// 地址: 0x486280
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
char* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* ebx_1 = arg1
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t edi_1 = ebx_1[0x99].w

if (arg2 != edi_1)
    char eax_1
    int32_t ecx
    
    if ((ebx_1[7].b & 0x10) == 0)
        eax_1, ecx = sub_485d34(ebx_1, arg2, arg2 - edi_1)
    
    if ((ebx_1[7].b & 0x10) != 0 || eax_1 != 0)
        ebx_1[0x99].w = arg2
        
        if ((ebx_1[7].b & 0x10) != 0 && ebx_1[0x95] != 0)
            int32_t* esi_2 = ebx_1[0x95]
            
            if (sub_403df4(esi_2, 0x435264) != 0)
                ebx_1[0x99].w
                sub_409340(ecx, &var_8)
                ebx_1, ebp_1 = sub_457808(esi_2, var_8)
                esp_1 = &var_8
        
        if (sub_45fc28(ebx_1) != 0)
            *(esp_1 - 4) = zx.d(ebx_1[0x99].w)
            *(esp_1 - 8) = 0
            *(esp_1 - 0xc) = 0x467
            *(esp_1 - 0x10) = sub_45f888(ebx_1)
            SendMessageA()

esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = sub_486352
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
