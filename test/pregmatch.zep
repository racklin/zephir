namespace Test;

class Pregmatch
{
	public function testWithoutReturnAndMatches()
	{
            var pattern, subject;

            let pattern = "/def$/";
            let subject = "abcdef";

            // without return auto created temp variable
            preg_match(pattern, subject);

            // compiler optimized , using return_value variable
            return preg_match(pattern, subject);

	}

	public function testWithoutReturns()
	{
            var pattern, subject, matches = "";

            let pattern = "/def$/";
            let subject = "abcdef";

            preg_match(pattern, subject, matches);

            return matches;
	}

	public function testWithoutMatches()
	{
            var pattern, subject, matched;

            let pattern = "/def$/";
            let subject = "abcdef";

            let matched = preg_match(pattern, subject);

            return matched;
	}

        public function testPregMatchAll() {

            var pattern, subject;

            let pattern = "/def$/";
            let subject = "abcdef";

            return preg_match_all(pattern, subject);
        }

        public function testPregMatchFallback() {

            var pattern, subject, matches;
            let matches = [];

            let pattern = "/def$/";
            let subject = "abcdef";

            return preg_match(pattern, subject, matches, 0, 0);
        }


        public function testPregMatch2Params(var pattern, var subject) {
            return preg_match(pattern, subject);
        }

        public function testPregMatch3Params(var pattern, var subject, var matches) {
            return preg_match(pattern, subject, matches);
        }

        public function testPregMatch4Params(var pattern, var subject, var matches, var flags) {
            return preg_match(pattern, subject, matches, flags);
        }

        public function testPregMatch5Params(var pattern, var subject, var matches, var flags, var offset) {
            return preg_match(pattern, subject, matches, flags, offset);
        }

        public function testMatchAll(flags)
        {
            var text, matches;
            let text = "test1,test2";
            preg_match_all("/(test[0-9]+)/", text, matches, flags);
            return matches;
        }

        public function testMatchAllInZep()
        {
            var m1, m2;
            let m1 = this->testMatchAll(PREG_PATTERN_ORDER);
            let m2 = this->testMatchAll(PREG_SET_ORDER);

            print_r(m1);
            print_r(m2);
        }
}

