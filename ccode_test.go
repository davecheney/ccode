package ccode

import "testing"

func TestTrue(t *testing.T) {
	if !True() {
		t.Fatalf("True(): expected %v got %v", true, True())
	}
}

func TestMax(t *testing.T) {
	a, b := 42, -6
	if Max(a, b) != a {
		t.Fatalf("Max(%v, %v): expected %v, got %v", a, b, a, Max(a, b))
	}
}

func TestInc(t *testing.T) {
	v := 9000
	if Inc(&v); v < 9001 {
		t.Fatalf("Inc(9000): expected 9001, got %v", v)
	}
}
