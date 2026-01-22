// 函数: sub_485e9c
// 地址: 0x485e9c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t edi
int32_t var_28 = edi
int32_t var_1c = 0
int32_t* esi_1 = arg2
int32_t* ebx_1 = arg1
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (esi_1 != 0)
    int32_t eax_2 = sub_45b7f4(ebx_1[0xc]) - 1
    
    if (eax_2 s>= 0)
        int32_t var_8_1 = eax_2 + 1
        int32_t edi_1 = 0
        int32_t i
        
        do
            if (sub_403df4(sub_45b7b8(ebx_1[0xc], edi_1), &data_47fcc0) != 0
                    && ebx_1 != sub_45b7b8(ebx_1[0xc], edi_1)
                    && esi_1 == *(sub_45b7b8(ebx_1[0xc], edi_1) + 0x254))
                ebp_1[-5] = esi_1[2]
                ebp_1[-4].b = 0xb
                void* eax_13
                int32_t edx_4
                eax_13, edx_4 = sub_45b7b8(ebx_1[0xc], edi_1)
                ebp_1[-3] = *(eax_13 + 8)
                ebp_1[-2].b = 0xb
                edx_4.b = 1
                int32_t eax_16
                eax_16, ebx_1, ebp_1, esi_1 =
                    sub_40cfa8(sub_407f68+0x68, edx_4, data_4ac490, 1, &ebp_1[-5])
                sub_40451c(eax_16)
            
            edi_1 += 1
            i = ebp_1[-1]
            ebp_1[-1] -= 1
        while (i != 1)

if (ebx_1[0x95] != 0)
    if (sub_45fc28(ebx_1) != 0)
        SendMessageA(sub_45f888(ebx_1), 0x469, 0, 0)
    
    ebx_1[0x95] = 0

if (esi_1 != 0 && esi_1[0xc] == ebx_1[0xc] && sub_403df4(esi_1, &data_47fcc0) == 0
        && sub_403df4(esi_1, data_4aa794) == 0 && sub_403df4(esi_1, data_4aa794) == 0
        && sub_485e6c(sub_403b40(esi_1), "TDBEdit") == 0)
    char eax_33
    int32_t ecx_2
    eax_33, ecx_2 = sub_485e6c(sub_403b40(esi_1), "TDBMemo")
    
    if (eax_33 == 0)
        if (sub_45fc28(ebx_1) != 0)
            sub_4860a8(ebx_1, esi_1)
            WPARAM wParam = sub_45f888(esi_1)
            ecx_2 = SendMessageA(sub_45f888(ebx_1), 0x469, wParam, 0)
        
        ebx_1[0x95] = esi_1
        
        if (sub_403df4(esi_1, 0x435264) != 0)
            ebx_1[0x99].w
            sub_409340(ecx_2, &ebp_1[-6])
            ebp_1 = sub_457808(esi_1, ebp_1[-6])

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_2c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_486081
sub_404b88(&ebp_1[-6])
return &ebp_1[-6]
