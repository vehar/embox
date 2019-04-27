/**
 * @file
 *
 * @date Apr 26, 2019
 * author: Anton Bondarev
 */
#include <stddef.h>

#include <hal/mmu.h>

void mmu_on(void) {
}

void mmu_off(void) {

}
mmu_pgd_t *mmu_get_root(mmu_ctx_t ctx) {
	return NULL;
}

mmu_pmd_t *mmu_pgd_value(mmu_pgd_t *pgd) {
	return NULL;
}

mmu_pte_t *mmu_pmd_value(mmu_pmd_t *pmd) {
	return NULL;
}

mmu_paddr_t mmu_pte_value(mmu_pte_t *pte) {
	return 0;
}

void mmu_pte_set(mmu_pte_t *ptep, mmu_pte_t addr) {

}

void mmu_pgd_set(mmu_pgd_t *pgdp, mmu_pmd_t *pmdp) {

}

void mmu_pmd_set(mmu_pmd_t *pmdp, mmu_pte_t *ptep) {

}

void mmu_pgd_unset(mmu_pgd_t *pgd) {
	return ;
}

void mmu_pmd_unset(mmu_pmd_t *pmd) {

}

void mmu_pte_unset(mmu_pgd_t *pte) {

}

int mmu_pgd_present(mmu_pgd_t *pgd) {
	return 0;
}

int mmu_pmd_present(mmu_pmd_t *pmd) {
	return 0;
}

int mmu_pte_present(mmu_pte_t *pte) {
	return 0;
}

void mmu_pte_set_writable(mmu_pte_t *pte, int value){

}

void mmu_pte_set_cacheable(mmu_pte_t *pte, int value) {

}

void mmu_pte_set_usermode(mmu_pte_t *pte, int value) {
	//MMU_DEBUG_PRINT(printk("\nmmu_pte_set_usermode does not implemented!\n"));
}

void mmu_pte_set_executable(mmu_pte_t *pte, int value) {

}


void mmu_flush_tlb(void) {

}

mmu_ctx_t mmu_create_context(mmu_pgd_t *pgd) {
	return (mmu_ctx_t) pgd;
}

void mmu_set_context(mmu_ctx_t ctx) {

}
