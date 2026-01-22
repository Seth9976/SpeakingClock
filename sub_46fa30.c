// 函数: sub_46fa30
// 地址: 0x46fa30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t var_14 = 0
HANDLE esi_1 = arg2
int32_t* ebx_1 = arg1
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (esi_1 != 0)
    int32_t eax_2 = sub_474128(data_4b1ce4) - 1
    
    if (eax_2 s>= 0)
        int32_t var_8_1 = eax_2 + 1
        int32_t edi_1 = 0
        int32_t i
        
        do
            void* eax_5
            eax_5, arg2 = sub_474114(data_4b1ce4, edi_1)
            
            if (esi_1 == *(eax_5 + 0x290))
                int32_t eax_7
                eax_7, arg2 = sub_474114(data_4b1ce4, edi_1)
                
                if (ebx_1 != eax_7)
                    ebp_1[-3] = *(esi_1 + 8)
                    ebp_1[-2].b = 0xb
                    void* var_30_1 = &ebp_1[-3]
                    sub_406a30(data_4ac0c0, &ebp_1[-4])
                    int32_t edx_3
                    edx_3.b = 1
                    int64_t** eax_11
                    eax_11, ebx_1, ebp_1, esi_1 = sub_40ceec(sub_417654+0x48, edx_3, ebp_1[-4], 0)
                    sub_40451c(eax_11)
            
            edi_1 += 1
            i = ebp_1[-1]
            ebp_1[-1] -= 1
        while (i != 1)

HANDLE eax_12 = ebx_1[0xa4]

if (eax_12 != 0)
    sub_4501b8(eax_12, 0)

if ((ebx_1[7].b & 8) != 0)
    esi_1 = nullptr
else if (esi_1 != 0 && (*(esi_1 + 0x1c) & 8) != 0)
    esi_1 = nullptr

ebx_1[0xa4] = esi_1

if (esi_1 != 0)
    sub_423408(esi_1, ebx_1)

if (esi_1 == 0 || ((ebx_1[7].b & 0x10) == 0 && *(ebx_1 + 0x271) == 3))
    if (sub_45fc28(ebx_1) != 0)
        SetMenu(sub_45f888(ebx_1), nullptr)
else if ((*(ebx_1[0xa4] + 0x5c) == 0 && *(ebx_1 + 0x277) != 1) || (ebx_1[7].b & 0x10) != 0)
    if (sub_45fc28(ebx_1) != 0)
        if ((*(*ebx_1[0xa4] + 0x34))() != GetMenu(sub_45f888(ebx_1)))
            HMENU hMenu = (*(*ebx_1[0xa4] + 0x34))()
            SetMenu(sub_45f888(ebx_1), hMenu)
        
        sub_4501b8(esi_1, sub_45f888(ebx_1))
else if (*(ebx_1 + 0x277) != 1 && sub_45fc28(ebx_1) != 0)
    SetMenu(sub_45f888(ebx_1), nullptr)

if (*(ebx_1 + 0x276) != 0)
    arg2.b = 1
    sub_471284(ebx_1, arg2.b)

sub_46f968(ebx_1)

if (ebx_1[0xa6] != 0 && (ebx_1[7].b & 0x10) != 0 && ebx_1[0xc] != 0)
    SetWindowPos(sub_45f888(ebx_1), nullptr, 0, 0, 0, 0, 0x37)
    sub_458ac8(ebx_1, 0)
    sub_458ac8(ebx_1, 0)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_46fc4b
sub_404b88(&ebp_1[-4])
return &ebp_1[-4]
