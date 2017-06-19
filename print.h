#ifndef PRINT_HDR
#define PRINT_HDR

namespace glsl {

	void printBuiltin(astBuiltin *builtin);

	void printType(astType *type);

	void printIntConstant(astIntConstant *expression);

	void printUIntConstant(astUIntConstant *expression);

	void printFloatConstant(astFloatConstant *expression);

	void printDoubleConstant(astDoubleConstant *expression);

	void printBoolConstant(astBoolConstant *expression);

	void printArraySize(const vector<astConstantExpression*> &arraySizes);

	void printVariable(astVariable *variable, bool nameOnly = false);

	void printStorage(int storage);

	void printAuxiliary(int auxiliary);

	void printMemory(int memory);

	void printPrecision(int precision);

	void printGlobalVariable(astGlobalVariable *variable);

	void printVariableIdentifier(astVariableIdentifier *expression);

	void printFieldOrSwizzle(astFieldOrSwizzle *expression);

	void printArraySubscript(astArraySubscript *expression);

	void printFunctionCall(astFunctionCall *expression);

	void printConstructorCall(astConstructorCall *expression);


	enum { kSemicolon = 1 << 0, kNewLine = 1 << 1, kDefault = kSemicolon | kNewLine };
	void printFunctionVariable(astFunctionVariable *variable, int flags = kDefault);

	void printPostIncrement(astPostIncrementExpression *expression);

	void printPostDecrement(astPostDecrementExpression *expression);

	void printUnaryMinus(astUnaryMinusExpression *expression);

	void printUnaryPlus(astUnaryPlusExpression *expression);

	void printUnaryBitNot(astUnaryBitNotExpression *expression);

	void printUnaryLogicalNot(astUnaryLogicalNotExpression *expression);

	void printPrefixIncrement(astPrefixIncrementExpression *expression);

	void printPrefixDecrement(astPrefixDecrementExpression *expression);

	void printAssign(astAssignmentExpression *expression);

	void printSequence(astSequenceExpression *expression);

	void printOperation(astOperationExpression *expression);

	void printTernary(astTernaryExpression *expression);

	void printExpression(astExpression *expression);

	void printCompoundStatement(astCompoundStatement *statement);

	void printEmptyStatement();

	void printDeclarationStatement(astDeclarationStatement *statement, int flags = kDefault);

	void printExpressionStatement(astExpressionStatement *statement, int flags = kDefault);

	void printIfStetement(astIfStatement *statement);

	void printSwitchStatement(astSwitchStatement *statement);

	void printCaseLabelStatement(astCaseLabelStatement *statement);

	void printWhileStatement(astWhileStatement *statement);

	void printDoStatement(astDoStatement *statement);

	void printForStatement(astForStatement *statement);

	void printContinueStatement();

	void printBreakStatement();

	void printReturnStatement(astReturnStatement *statement);

	void printDiscardStatement();

	void printStatement(astStatement *statement);

	void printFunctionParameter(astFunctionParameter *parameter);

	void printFunction(astFunction *function);

	void printStructure(astStruct *structure);

	void printTU(astTU *tu);

}

#endif

