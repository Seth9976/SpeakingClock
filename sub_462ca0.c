// 函数: sub_462ca0
// 地址: 0x462ca0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_4c = ebx
int32_t esi
int32_t var_50 = esi
int32_t edi
int32_t var_54 = edi
int32_t var_48 = 0
int32_t var_c = 0
int32_t* var_58 = &var_4
int32_t (* var_5c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_4635a4(arg1, *(arg1 + 0x64))
char var_29 = *(arg1 + 0x74)
sub_46237c(arg1)
int32_t* var_64 = &var_4
int32_t (* var_68)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg2 + 0xc))(ExceptionList, var_68, var_64, ExceptionList_1, var_5c, var_58)
int32_t var_20

if (var_20 == 0x40000)
    *(arg1 + 0x74) = 0
    char var_2a_1 = 0
else if (*(arg1 + 0x70) != var_20)
    int32_t var_44 = *(arg1 + 0x70)
    char var_40_1 = 0
    int32_t var_3c_1 = var_20
    char var_38_1 = 0
    int32_t* var_c_1 = &var_44
    int32_t var_10_1 = 1
    sub_406a30(data_4ac07c, &var_48)
    int32_t edx_3
    edx_3.b = 1
    int64_t** eax_16
    eax_16, ebp_1, esi = sub_40ceec(sub_407f68+0x68, edx_3, var_48, var_10_1)
    sub_40451c(eax_16)
else
    (*(*arg2 + 0xc))(arg2)
    (*(*arg2 + 0xc))()

char* ecx_5
int32_t edx_5
edx_5, ecx_5 = (*(*ebp_1[-1] + 0xc))(arg2)
int32_t eax_19 = ebp_1[-8] - 1

if (eax_19 s>= 0)
    ebp_1[-0xc] = eax_19 + 1
    ebp_1[-7] = 0
    int32_t i
    
    do
        edx_5 = sub_462c58(&ebp_1[-2], edx_5, ecx_5, ebp_1)
        ecx_5 = ebp_1
        
        if (ebp_1[-2] != 0)
            esi.w = 0xffb7
            ecx_5, edx_5 = sub_403e64(*(ebp_1[-3] + 0x14), esi, ebp_1[-2], &ebp_1[-4])
            
            if (ebp_1[-4] != 0)
                sub_4576f8(ebp_1[-4], 0)
                ecx_5, edx_5, ebp_1 = sub_458610(0, *(ebp_1[-3] + 0x14), ebp_1[-4], 0)
        
        ebp_1[-7] += 1
        i = ebp_1[-0xc]
        ebp_1[-0xc] -= 1
    while (i != 1)

ebp_1[-3]
(*(*ebp_1[-1] + 0xc))()

if (*(ebp_1[-3] + 0x74) != 0)
    *(ebp_1 - 0x26)
    int32_t eax_31 = (*(*ebp_1[-3] + 0x28))()
    ebp_1[-3]
    *(ebp_1[-3] + 0x68) = sub_464694(eax_31, *(ebp_1[-3] + 0x68))

ebp_1[-6] = 0
int32_t* esi_1 = nullptr

while (true)
    (*(*ebp_1[-1] + 0xc))()
    
    if (ebp_1[-5] == data_4ab984)
        break
    
    int32_t edx_13
    edx_13.b = 1
    int32_t* eax_37 = sub_461b1c(&data_453d50, edx_13, ebp_1[-3])
    (*(*ebp_1[-1] + 0xc))()
    char* ecx_14
    int32_t edx_16
    edx_16, ecx_14 = (*(*ebp_1[-1] + 0xc))()
    
    if (*(ebp_1[-3] + 0x74) != 0)
        eax_37[4].b
        int32_t eax_42 = (*(*ebp_1[-3] + 0x28))()
        ebp_1[-3]
        int32_t eax_44
        eax_44, ecx_14, edx_16 = sub_464694(eax_42, eax_37[8])
        eax_37[8] = eax_44
    
    sub_462c58(&ebp_1[-2], edx_16, ecx_14, ebp_1)
    
    if (ebp_1[-2] != 0)
        ebp_1[-2]
        
        if (sub_461e68(eax_37) == 0)
            sub_403c68(eax_37)
            continue
    
    if (ebp_1[-5] == 0)
        *(ebp_1[-3] + 0x64) = eax_37
    else if (ebp_1[-5] == ebp_1[-6])
        if (esi_1[6] != 0 && esi_1[1] == 0)
            ebp_1[-0xb] = esi_1
            esi_1 = esi_1[6]
            sub_403c68(ebp_1[-0xb])
        
        esi_1[3] = eax_37
        eax_37[6] = esi_1
        eax_37[5] = esi_1[5]
    else if (ebp_1[-5] s> ebp_1[-6])
        esi_1[2] = eax_37
        eax_37[5] = esi_1
    else if (ebp_1[-5] s< ebp_1[-6])
        ebp_1[-9] = esi_1
        int32_t eax_56 = ebp_1[-6] - ebp_1[-5]
        
        if (eax_56 s> 0)
            ebp_1[-0xc] = eax_56
            ebp_1[-7] = 1
            int32_t i_1
            
            do
                ebp_1[-9] = *(ebp_1[-9] + 0x14)
                ebp_1[-7] += 1
                i_1 = ebp_1[-0xc]
                ebp_1[-0xc] -= 1
            while (i_1 != 1)
        
        *(ebp_1[-9] + 0xc) = eax_37
        eax_37[6] = ebp_1[-9]
        eax_37[5] = *(ebp_1[-9] + 0x14)
    
    ebp_1[-6] = ebp_1[-5]
    esi_1 = eax_37

fsbase->NtTib.ExceptionList = arg2
__return_addr = sub_462fc5
*(ebp_1[-3] + 0x74) = *(ebp_1 - 0x25)

if (*(ebp_1[-3] + 0x64) == 0)
    uint32_t edx_21
    edx_21.b = 1
    *(ebp_1[-3] + 0x64) = sub_461b1c(&data_453d50, edx_21, ebp_1[-3])

return sub_462380(ebp_1[-3])
