// 函数: sub_477f40
// 地址: 0x477f40
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_98 = ebx
int32_t esi
int32_t var_9c = esi
int32_t edi
int32_t var_a0 = edi
int32_t var_90 = 0
int32_t var_94 = 0
int32_t var_50 = *arg2
int32_t var_4c = arg2[1]
BOOL var_8 = arg1
int32_t var_48
sub_405608(&var_48, sub_46b498+0x19c)
int32_t* var_a4 = &var_4
int32_t (* var_a8)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(var_8 + 0x58) = 0
int32_t var_18 = 0

if (*(var_8 + 0x88) == 0 || *(var_8 + 0x60) == 0)
label_478287:
    uint32_t eax_87 = ebp_1[-5]
    
    if (eax_87 s<= 0)
        sub_477ca0(var_8)
    else
        sub_477a68(var_8, eax_87, 0)
else
    if (sub_46bc9c(sub_478b74()) == 0)
        goto label_478287
    
    if (sub_474d74(sub_455d48(&var_50, 1)) != *(var_8 + 0x60))
        goto label_478287
    
    var_48 = *(var_8 + 0x60)
    int32_t var_40_1 = var_50
    int32_t var_3c_1 = var_4c
    int32_t eax_14
    eax_14, ebp_1 = sub_477cd8()
    ebp_1[-0xe] += eax_14
    data_4b1ce4
    ebp_1[-0xd] = sub_4740a8()
    ebp_1[-0xc] = *(var_8 + 0x5c)
    sub_4570f0(*(var_8 + 0x60), &ebp_1[-0x20])
    ebp_1[-0xb] = ebp_1[-0x20]
    void* edi_4 = &ebp_1[-0xa]
    void* esi_5 = &ebp_1[-0x1f]
    *edi_4 = *esi_5
    void* edi_5 = edi_4 + 4
    void* esi_6 = esi_5 + 4
    *edi_5 = *esi_6
    *(edi_5 + 4) = *(esi_6 + 4)
    (*(**(var_8 + 0x60) + 0x40))()
    ebp_1[-0x17] = 0
    ebp_1[-0x16] = 0
    int32_t* esi_9 = *(*(var_8 + 0x60) + 0x30)
    
    if (esi_9 == 0)
        int32_t* esi_10 = *(var_8 + 0x60)
        
        if (sub_403df4(esi_10, &data_453234) != 0 && esi_10[0x71] != 0)
            ClientToScreen(esi_10[0x71], &ebp_1[-0x17])
    else
        (*(*esi_9 + 0x40))()
    
    OffsetRect(&ebp_1[-0xb], ebp_1[-0x17] - ebp_1[-0x15], ebp_1[-0x16] - ebp_1[-0x14])
    sub_457310(*(var_8 + 0x60), &ebp_1[-0x13], &ebp_1[-0x22])
    ebp_1[-7] = ebp_1[-0x22]
    ebp_1[-6] = ebp_1[-0x21]
    sub_474d3c(*(var_8 + 0x60), &ebp_1[-0x24])
    sub_4544a0(ebp_1[-0x24], &ebp_1[-0x23])
    sub_404c20(&ebp_1[-3], ebp_1[-0x23])
    ebp_1[-4] = *(var_8 + 0x74)
    ebp_1[-0x10] = data_4aba24
    ebp_1[-2] = 0
    sub_458ac8(*(var_8 + 0x60), &ebp_1[-0x11])
    esp = &var_8
    *(ebp_1 - 0x5d) = true
    
    if (*(ebp_1 - 0x5d) != 0 && *(var_8 + 0x15a) != 0)
        BOOL esi_11 = var_8
        *(esi_11 + 0x15c)
        (*(esi_11 + 0x158))(&ebp_1[-0x11])
        esp = &var_8
    
    BOOL eax_53
    
    if (*(ebp_1 - 0x5d) == 0 || *(var_8 + 0x60) == 0)
        eax_53 = 0
    else
        eax_53.b = 1
    
    BOOL edx_11 = var_8
    *(edx_11 + 0x58) = eax_53.b
    
    if (*(var_8 + 0x58) == 0 || ebp_1[-3] == 0)
        goto label_478287
    
    int32_t* var_c_5 = ebp_1
    sub_477e30(ebp_1[-0x10], edx_11)
    *(*(var_8 + 0x60) + 0x5f)
    (*(**(var_8 + 0x84) + 0x74))()
    ebp_1[-3]
    ebp_1[-0xd]
    (*(**(var_8 + 0x84) + 0xe8))(ebp_1 - 0x6d, ebp_1[-2])
    OffsetRect(ebp_1 - 0x6d, ebp_1[-0xf], ebp_1[-0xe])
    int32_t esi_12
    esi_12.w = 0xffc7
    char eax_69
    void* edx_14
    eax_69, edx_14 = sub_403e64(*(var_8 + 0x84), esi_12)
    
    if (eax_69 != 0)
        int32_t* var_c_8 = ebp_1
        int32_t* eax_71
        eax_71, ebp_1 = sub_477e90(ebp_1[-3], edx_14)
        *(ebp_1 - 0x6d) -= eax_71 + 5
        *(ebp_1 - 0x65) -= eax_71 + 5
    
    sub_457260(*(var_8 + 0x60), &ebp_1[-0xb], &ebp_1[-0x22])
    BOOL eax_75 = var_8
    *(eax_75 + 0x64) = ebp_1[-0x22]
    *(eax_75 + 0x68) = ebp_1[-0x21]
    sub_457260(*(var_8 + 0x60), &ebp_1[-9], &ebp_1[-0x22])
    BOOL eax_78 = var_8
    *(eax_78 + 0x6c) = ebp_1[-0x22]
    *(eax_78 + 0x70) = ebp_1[-0x21]
    sub_457978(*(var_8 + 0x84), ebp_1[-0xc])
    ebp_1[-3]
    esp = &var_8
    sub_474e88((*(**(var_8 + 0x84) + 0xe4))(ebp_1[-2]))
    uint32_t eax_84 = ebp_1[-5]
    
    if (eax_84 s<= 0)
        sub_477a68(var_8, ebp_1[-4], 1)
    else
        sub_477a68(var_8, eax_84, 0)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4782d5
sub_404bac(&ebp_1[-0x24], 2)
sub_4056d8(&ebp_1[-0x11], sub_46b498+0x19c)
return &ebp_1[-0x11]
