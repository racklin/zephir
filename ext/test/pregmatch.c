
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/string.h"
#include "kernel/operators.h"
#include "kernel/fcall.h"


ZEPHIR_INIT_CLASS(Test_Pregmatch) {

	ZEPHIR_REGISTER_CLASS(Test, Pregmatch, test, pregmatch, test_pregmatch_method_entry, 0);


	return SUCCESS;

}

PHP_METHOD(Test_Pregmatch, testWithoutReturnAndMatches) {

	zval *pattern, *subject, *_0, *_1, *_2;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(pattern);
	ZVAL_STRING(pattern, "/def$/", 1);
	ZEPHIR_INIT_VAR(subject);
	ZVAL_STRING(subject, "abcdef", 1);
	ZEPHIR_INIT_VAR(_0);
	ZEPHIR_INIT_VAR(_1);
	zephir_preg_match(_1, &(_1), pattern, subject, _0, 0, 0 , 0  TSRMLS_CC);
	ZEPHIR_INIT_VAR(_2);
	zephir_preg_match(return_value, &(return_value), pattern, subject, _2, 0, 0 , 0  TSRMLS_CC);
	RETURN_MM();

}

PHP_METHOD(Test_Pregmatch, testWithoutReturns) {

	zval *pattern, *subject, *matches, *_0;

	ZEPHIR_MM_GROW();
	ZEPHIR_INIT_VAR(matches);
	ZVAL_STRING(matches, "", 1);

	ZEPHIR_INIT_VAR(pattern);
	ZVAL_STRING(pattern, "/def$/", 1);
	ZEPHIR_INIT_VAR(subject);
	ZVAL_STRING(subject, "abcdef", 1);
	ZEPHIR_INIT_VAR(_0);
	zephir_preg_match(_0, &(_0), pattern, subject, matches, 0, 0 , 0  TSRMLS_CC);
	RETURN_CCTOR(matches);

}

PHP_METHOD(Test_Pregmatch, testWithoutMatches) {

	zval *pattern, *subject, *matched, *_0;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(pattern);
	ZVAL_STRING(pattern, "/def$/", 1);
	ZEPHIR_INIT_VAR(subject);
	ZVAL_STRING(subject, "abcdef", 1);
	ZEPHIR_INIT_VAR(_0);
	ZEPHIR_INIT_VAR(matched);
	zephir_preg_match(matched, &(matched), pattern, subject, _0, 0, 0 , 0  TSRMLS_CC);
	RETURN_CCTOR(matched);

}

PHP_METHOD(Test_Pregmatch, testPregMatchAll) {

	zval *pattern, *subject, *_0;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(pattern);
	ZVAL_STRING(pattern, "/def$/", 1);
	ZEPHIR_INIT_VAR(subject);
	ZVAL_STRING(subject, "abcdef", 1);
	ZEPHIR_INIT_VAR(_0);
	zephir_preg_match(return_value, &(return_value), pattern, subject, _0, 1, 0 , 0  TSRMLS_CC);
	RETURN_MM();

}

PHP_METHOD(Test_Pregmatch, testPregMatchFallback) {

	zval *pattern, *subject, *matches;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(matches);
	array_init(matches);
	ZEPHIR_INIT_VAR(pattern);
	ZVAL_STRING(pattern, "/def$/", 1);
	ZEPHIR_INIT_VAR(subject);
	ZVAL_STRING(subject, "abcdef", 1);
	zephir_preg_match(return_value, &(return_value), pattern, subject, matches, 0, 0 , 0  TSRMLS_CC);
	RETURN_MM();

}

PHP_METHOD(Test_Pregmatch, testPregMatch2Params) {

	zval *pattern, *subject, *_0;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &pattern, &subject);



	ZEPHIR_INIT_VAR(_0);
	zephir_preg_match(return_value, &(return_value), pattern, subject, _0, 0, 0 , 0  TSRMLS_CC);
	RETURN_MM();

}

PHP_METHOD(Test_Pregmatch, testPregMatch3Params) {

	zval *pattern, *subject, *matches;

	zephir_fetch_params(0, 3, 0, &pattern, &subject, &matches);



	zephir_preg_match(return_value, &(return_value), pattern, subject, matches, 0, 0 , 0  TSRMLS_CC);
	return;

}

PHP_METHOD(Test_Pregmatch, testPregMatch4Params) {

	zval *pattern, *subject, *matches, *flags;

	zephir_fetch_params(0, 4, 0, &pattern, &subject, &matches, &flags);



	zephir_preg_match(return_value, &(return_value), pattern, subject, matches, 0, zephir_get_intval(flags) , 0  TSRMLS_CC);
	return;

}

PHP_METHOD(Test_Pregmatch, testPregMatch5Params) {

	zval *pattern, *subject, *matches, *flags, *offset;

	zephir_fetch_params(0, 5, 0, &pattern, &subject, &matches, &flags, &offset);



	zephir_preg_match(return_value, &(return_value), pattern, subject, matches, 0, zephir_get_intval(flags) , zephir_get_intval(offset)  TSRMLS_CC);
	return;

}

PHP_METHOD(Test_Pregmatch, testMatchAll) {

	zval *flags, *text, *matches, *_0, _1;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &flags);



	ZEPHIR_INIT_VAR(text);
	ZVAL_STRING(text, "test1,test2", 1);
	ZEPHIR_INIT_VAR(matches);
	ZEPHIR_INIT_VAR(_0);
	ZEPHIR_SINIT_VAR(_1);
	ZVAL_STRING(&_1, "/(test[0-9]+)/", 0);
	zephir_preg_match(_0, &(_0), &_1, text, matches, 1, zephir_get_intval(flags) , 0  TSRMLS_CC);
	RETURN_CCTOR(matches);

}

PHP_METHOD(Test_Pregmatch, testMatchAllInZep) {

	zval *m1, *m2, *_0;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	ZVAL_LONG(_0, 1);
	ZEPHIR_INIT_VAR(m1);
	zephir_call_method_p1(m1, this_ptr, "testmatchall", _0);
	ZEPHIR_INIT_BNVAR(_0);
	ZVAL_LONG(_0, 2);
	ZEPHIR_INIT_VAR(m2);
	zephir_call_method_p1(m2, this_ptr, "testmatchall", _0);
	zephir_call_func_p1_noret("print_r", m1);
	zephir_call_func_p1_noret("print_r", m2);
	ZEPHIR_MM_RESTORE();

}

