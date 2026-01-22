// 函数: sub_43f6c0
// 地址: 0x43f6c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_cc = ebx
int32_t esi
int32_t var_d0 = esi
int32_t edi
int32_t var_d4 = edi
int32_t var_b4 = 0
int32_t var_b8 = 0
int32_t ecx
int32_t var_c = ecx
int32_t* var_d8 = &var_4
int32_t (* var_dc)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp_1 = sub_43f528(arg1, 0)
HGLOBAL hMem = *(arg1 + 0x28)

if (arg3 != hMem)
    if (hMem != 0)
        GlobalUnlock(hMem)
        GlobalFree(*(arg1 + 0x28))
        *(arg1 + 0x24) = 0
    
    *(arg1 + 0x28) = arg3

HGLOBAL hMem_2 = *(arg1 + 0x28)

if (hMem_2 != 0)
    void* eax_2 = GlobalLock(hMem_2)
    *(arg1 + 0x24) = eax_2
    sub_43f684(arg1, *(eax_2 + 0x28))

sub_43fe98(arg1)
int32_t eax_5 = *(arg1 + 0x2c)

if (eax_5 != 0)
    ClosePrinter(eax_5)
    *(arg1 + 0x2c) = 0

int32_t edx_1
void* ebx_2
edx_1, ebx_2 = sub_43f3f8(arg1, 0)
*(ebp_1 - 0xc) = 0xffffffff
int32_t eax_8
void* ebp_2
eax_8, ebp_2 = sub_43f998(ebx_2, edx_1)
*(ebp_2 - 0x10) = eax_8
int32_t edi_3 = (*(**(ebp_2 - 0x10) + 0x14))(arg2) - 1

if (edi_3 s>= 0)
    int32_t i_1 = edi_3 + 1
    int32_t i
    
    do
        void* eax_13 = (*(**(ebp_2 - 0x10) + 0x18))(*(ebp_2 + 0xc))
        *(ebp_2 - 4)
        char eax_14
        int32_t esi_3
        eax_14, ebp_2, esi_3 = sub_43f104(eax_13, *(ebp_2 - 8))
        
        if (eax_14 != 0)
            int32_t eax_16
            int32_t ecx_4
            eax_16, ecx_4 = (*(**(ebp_2 - 0x10) + 0x18))()
            sub_404d80(ecx_4, *(ebp_2 + 0xc))
            *(ebp_2 - 0xc) = esi_3
            break
        
        i = i_1
        i_1 -= 1
    while (i != 1)

if (*(ebp_2 - 0xc) == 0xffffffff)
    int32_t eax_19
    int32_t edx_8
    eax_19, edx_8 = (*(**(ebx_2 + 0x10) + 0x14))()
    *(ebp_2 - 0xc) = eax_19
    edx_8.b = 1
    int32_t* var_c_3 =
        sub_43f0a4(*(ebp_2 - 8), edx_8, sub_43f028+0x48, *(ebp_2 + 0xc), *(ebp_2 - 4))
    sub_406a30(data_4ac04c, ebp_2 - 0xb4)
    char* eax_25 = *(ebp_2 - 0xb4)
    *(ebp_2 - 0xc4) = *(ebp_2 - 4)
    *(ebp_2 - 0xc0) = 6
    *(ebp_2 - 0xbc) = *(ebp_2 + 0xc)
    *(ebp_2 - 0xb8) = 6
    sub_40a37c(1, ebp_2 - 0xc4, eax_25, ebp_2 - 0xb0)
    *(ebp_2 - 0xb0)
    (*(**(ebx_2 + 0x10) + 0x3c))()

*(ebx_2 + 0x14) = *(ebp_2 - 0xc)

if (OpenPrinterA(*(ebp_2 - 4), ebx_2 + 0x2c, 0) != 0)
    if (*(ebx_2 + 0x28) == 0)
        HGLOBAL hMem_1 = GlobalAlloc(GHND, 
            DocumentPropertiesA(0, *(ebx_2 + 0x2c), *(ebp_2 - 4), ebp_2 - 0xac, ebp_2 - 0xac, 0))
        *(ebx_2 + 0x28) = hMem_1
        
        if (hMem_1 != 0)
            int32_t eax_36 = GlobalLock(hMem_1)
            *(ebx_2 + 0x24) = eax_36
            
            if (DocumentPropertiesA(0, *(ebx_2 + 0x2c), *(ebp_2 - 4), eax_36, eax_36, 2) s< 0)
                GlobalUnlock(*(ebx_2 + 0x28))
                GlobalFree(*(ebx_2 + 0x28))
                *(ebx_2 + 0x28) = 0
                *(ebx_2 + 0x24) = 0
    
    if (*(ebx_2 + 0x28) != 0)
        sub_43f684(ebx_2, *(*(ebx_2 + 0x24) + 0x28))

fsbase->NtTib.ExceptionList = arg2
__return_addr = sub_43f908
return sub_404bac(ebp_2 - 0xb4, 2)
